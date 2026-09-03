#pragma once
#include "CoreMinimal.h"
#include "QuestNodeController.h"
#include "QuestNodePlayMontage_Controller.generated.h"

class AActor;
class ADawnwalkerCommonCharacterBase;
class AHumanoidNPCBase;
class UAnimMontage;

UCLASS(Blueprintable)
class DAWNWALKER_API UQuestNodePlayMontage_Controller : public UQuestNodeController {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UAnimMontage* LoadedMontage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AActor> ActorWeakPtr;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AHumanoidNPCBase* CharacterToKeepVisAnimTick;
    
public:
    UQuestNodePlayMontage_Controller();

private:
    UFUNCTION(BlueprintCallable)
    void OnMontageEnded(UAnimMontage* EndedMontage, bool bInterrupted);
    
    UFUNCTION(BlueprintCallable)
    void OnCharacterAnimInstanceAvailable(ADawnwalkerCommonCharacterBase* Character);
    
};

