#pragma once
#include "CoreMinimal.h"
#include "QuestNodeController.h"
#include "LoadingProviderInterface.h"
#include "QuestNodeTeleportPawnToActor_Controller.generated.h"

class AActor;
class ACharacter;

UCLASS(Blueprintable)
class DAWNWALKER_API UQuestNodeTeleportPawnToActor_Controller : public UQuestNodeController, public ILoadingProviderInterface {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* TeleportSafetyPlatform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ACharacter* TargetCharacter;
    
public:
    UQuestNodeTeleportPawnToActor_Controller();

private:
    UFUNCTION(BlueprintCallable)
    void CheckIfStreamInCompleted();
    

    // Fix for true pure virtual functions not being implemented
};

