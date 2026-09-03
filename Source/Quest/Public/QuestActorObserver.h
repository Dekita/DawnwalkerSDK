#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "QuestActorKey.h"
#include "QuestComponentEntry.h"
#include "QuestActorObserver.generated.h"

class UQuestComponent;

UCLASS(Blueprintable)
class QUEST_API UQuestActorObserver : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FQuestActorKey, FQuestComponentEntry> TaggedQuestComponents;
    
    UPROPERTY(EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TSet<TWeakObjectPtr<UQuestComponent>> UntaggedQuestComponents;
    
public:
    UQuestActorObserver();

};

