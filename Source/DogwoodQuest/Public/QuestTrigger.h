#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "QuestTriggerInterface.h"
#include "QuestTrigger.generated.h"

class UQuestComponent;
class UQuestTriggerComponent;
class UShapeComponent;

UCLASS(Abstract, Blueprintable)
class DOGWOODQUEST_API AQuestTrigger : public AActor, public IQuestTriggerInterface {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UQuestComponent* QuestComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UQuestTriggerComponent* QuestTriggerComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UShapeComponent* CollisionComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UShapeComponent* NoticeCollisionComponent;
    
public:
    AQuestTrigger(const FObjectInitializer& ObjectInitializer);


    // Fix for true pure virtual functions not being implemented
};

