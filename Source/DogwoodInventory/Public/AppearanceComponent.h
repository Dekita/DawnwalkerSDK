#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "DismembermentForceParams.h"
#include "EAppearanceSlot.h"
#include "EBodyGroomType.h"
#include "EDismemberLimb.h"
#include "SpawnedGarmentComponentInfo.h"
#include "SpawnedGroomComponentInfo.h"
#include "AppearanceComponent.generated.h"

class IAppearanceReceiver;
class UAppearanceReceiver;
class UAppearanceBase;
class UCharacterBodyPreset;
class UDismembermentBoneMap;
class UGroomComponent;
class UObject;
class USkinnedMeshComponent;
class UStaticMesh;
class UStaticMeshComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class DOGWOODINVENTORY_API UAppearanceComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDismembermentBoneMap* DismembermentBoneMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EDismemberLimb, UStaticMesh*> LoadedDismembermentMeshes;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<EAppearanceSlot, FSpawnedGarmentComponentInfo> SpawnedGarmentMeshComponents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<EBodyGroomType, FSpawnedGroomComponentInfo> SpawnedGroomComponents;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UAppearanceBase* DeferredAppearance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIgnoreQualityLevel;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRemoveItemsOnUnequip;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TScriptInterface<IAppearanceReceiver> Receiver;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UObject*> LoadedObjectsCache;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAppearanceBase* CurrentAppearance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCharacterBodyPreset* CurrentBody;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UStaticMeshComponent*> SpawnedDismemberedLimbs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EDismemberLimb> DismemberedLimbs;
    
public:
    UAppearanceComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetIgnoreInventoryEquipEvents(const bool bIgnore);
    
    UFUNCTION(BlueprintCallable)
    void SetAppearanceVisibility(bool bHide);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnInventoryContentsChanged();
    
public:
    UFUNCTION(BlueprintCallable)
    void LeaderMeshRefreshBoneTransforms();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UGroomComponent* GetGroomComponent(EBodyGroomType InSlot) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USkinnedMeshComponent* GetGarmentMeshComponent(EAppearanceSlot InSlot) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UAppearanceBase* GetCurrentAppearance();
    
    UFUNCTION(BlueprintCallable)
    void DismemberLimb(EDismemberLimb InLimb, FDismembermentForceParams& DismembermentForceParams);
    
    UFUNCTION(BlueprintCallable)
    void ApplyBody(UCharacterBodyPreset* InBody);
    
    UFUNCTION(BlueprintCallable)
    void ApplyAppearance(UAppearanceBase* InAppearance);
    
};

