#pragma once
#include "CoreMinimal.h"
#include "AppearanceReceiver.h"
#include "Components/SkinnedMeshComponent.h"
#include "RebelHorseRiderInterface.h"
#include "DawnwalkerCharacterBase.h"
#include "HumanoidCharacter.generated.h"

class UAppearanceBase;
class UAppearanceComponent;
class UAudioCharacterFoleyComponent;
class UCharacterLadderUserComponent;
class UJaliAnimationComponent;
class USkeletalMeshComponent;

UCLASS(Blueprintable)
class DAWNWALKER_API AHumanoidCharacter : public ADawnwalkerCharacterBase, public IRebelHorseRiderInterface, public IAppearanceReceiver {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAppearanceBase* LoadedAppearanceData;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCharacterLadderUserComponent* LadderComponent;
    
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
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAudioCharacterFoleyComponent* AudioCharacterFoleyComponent;
    
public:
    AHumanoidCharacter(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION(BlueprintCallable)
    void UpdateVisAnimTick();
    
protected:
    UFUNCTION(BlueprintCallable)
    void UpdateSkinnedDecalMeshes();
    
public:
    UFUNCTION(BlueprintCallable)
    void ResetVisAnimTick(FName Category);
    
    UFUNCTION(BlueprintCallable)
    void RequestVisAnimTick(FName Category, EVisibilityBasedAnimTickOption VisTick);
    

    // Fix for true pure virtual functions not being implemented
};

