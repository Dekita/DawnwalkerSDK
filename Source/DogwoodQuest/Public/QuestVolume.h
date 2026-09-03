#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Volume.h"
#include "QuestTriggerInterface.h"
#include "QuestVolume.generated.h"

class UQuestComponent;
class UQuestTriggerComponent;

UCLASS(Blueprintable)
class DOGWOODQUEST_API AQuestVolume : public AVolume, public IQuestTriggerInterface {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UQuestComponent* QuestComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UQuestTriggerComponent* QuestTriggerComponent;
    
public:
    AQuestVolume(const FObjectInitializer& ObjectInitializer);


    // Fix for true pure virtual functions not being implemented
};

