#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "MaterialTypes.h"
#include "ESkinnedDecalAdditionalData.h"
#include "ESkinnedDecalBlendMode.h"
#include "SkinnedDecalData.h"
#include "SkinnedDecalSamplerState.h"
#include "SkinnedDecalSampler.generated.h"

class UMaterialInstanceDynamic;
class UMaterialInterface;
class USkinnedDecalInstance;
class USkinnedDecalSampler;
class USkinnedMeshComponent;
class UTextureRenderTarget2D;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SKINNEDDECALCOMPONENT_API USkinnedDecalSampler : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkinnedMeshComponent* Mesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxDecals;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinDecalDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<ESkinnedDecalBlendMode> BlendMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UMaterialInterface> OverlayBlendMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 LayerIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EMaterialParameterAssociation> Association;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<ESkinnedDecalAdditionalData> AdditionalData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UMaterialInstanceDynamic*> Materials;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool EnableSaveGame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<USkinnedDecalInstance*, int32> InstanceMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* OverlayBlendMaterialDynamic;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<USkinnedMeshComponent*> RenderMeshes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTextureRenderTarget2D* DataTarget;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSkinnedDecalSamplerState SamplerState;
    
public:
    USkinnedDecalSampler(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void UpdateInstance(USkinnedDecalInstance* Instance);
    
    UFUNCTION(BlueprintCallable)
    void UpdateAllDecals();
    
    UFUNCTION(BlueprintCallable)
    void SpawnDecalFromData(FSkinnedDecalData Data);
    
    UFUNCTION(BlueprintCallable)
    int32 SpawnDecal(FVector Location, const FQuat Rotation, FName BoneName, float Size, int32 SubUV, int32 Index, bool bNeverFadeAway);
    
    UFUNCTION(BlueprintCallable)
    void SetupMaterials();
    
    UFUNCTION(BlueprintCallable)
    void SetupComponentMaterials(USkinnedMeshComponent* Component);
    
    UFUNCTION(BlueprintCallable)
    void SetSamplerState(FSkinnedDecalSamplerState State);
    
    UFUNCTION(BlueprintCallable)
    void SetMeshComponent(USkinnedMeshComponent* MeshComponent, bool Child);
    
    UFUNCTION(BlueprintCallable)
    void SaveSampler(const FString& SlotName, const int32 UserIndex);
    
    UFUNCTION(BlueprintCallable)
    void RemoveDecal(const int32 Index);
    
    UFUNCTION(BlueprintCallable)
    void LoadSampler(const FString& SlotName, const int32 UserIndex);
    
    UFUNCTION(BlueprintCallable)
    FSkinnedDecalSamplerState GetSamplerState();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UTextureRenderTarget2D* GetDataTarget();
    
    UFUNCTION(BlueprintCallable)
    void CloneDecals(USkinnedDecalSampler* Source);
    
    UFUNCTION(BlueprintCallable)
    void ClearAllDecals();
    
    UFUNCTION(BlueprintCallable)
    void AutoSetup();
    
};

