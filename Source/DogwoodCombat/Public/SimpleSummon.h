#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "CombatNotifyData.h"
#include "SimpleSummon.generated.h"

class UAnimSequenceBase;
class USceneComponent;
class USkeletalMeshComponent;

UCLASS(Abstract, Blueprintable)
class DOGWOODCOMBAT_API ASimpleSummon : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* Root;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* SkeletalMesh;
    
public:
    ASimpleSummon(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnCombatAnimNotifyEnd(const FCombatNotifyData& NotifyData, UAnimSequenceBase* Animation);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnCombatAnimNotifyBegin(const FCombatNotifyData& NotifyData, UAnimSequenceBase* Animation);
    
};

