#pragma once
#include "CoreMinimal.h"
#include "EDialogueActorPriority.h"
#include "AppearanceReceiver.h"
#include "GameFramework/Actor.h"
#include "DummyAppearanceNPC.generated.h"

class UAppearanceBase;
class UAppearanceComponent;
class USkeletalMeshComponent;

UCLASS(Blueprintable)
class DAWNWALKER_API ADummyAppearanceNPC : public AActor, public IAppearanceReceiver {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EDialogueActorPriority Priority;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAppearanceComponent* AppearanceComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* LeaderMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* HairMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* EyebrowMeshComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* BeardMeshComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* HeadMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* TorsoMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* HandMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* LegMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* FeetMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAppearanceBase* Appearance;
    
public:
    ADummyAppearanceNPC(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void UnfreezeClothSimulation();
    
    UFUNCTION(BlueprintCallable)
    void ResetHairSimulation();
    
    UFUNCTION(BlueprintCallable)
    void ResetClothSimulation();
    
    UFUNCTION(BlueprintCallable)
    void ResetClothAndHairSimulation();
    
    UFUNCTION(BlueprintCallable)
    void FreezeClothSimulation();
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void ApplyAppearance(UAppearanceBase* InAppearance) const;
    

    // Fix for true pure virtual functions not being implemented
};

