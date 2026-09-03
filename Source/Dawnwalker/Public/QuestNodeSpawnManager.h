#pragma once
#include "CoreMinimal.h"
#include "QuestNodeSpawnBase.h"
#include "QuestNodeSpawnManager.generated.h"

class UCommunityBaseActivator;

UCLASS(Blueprintable)
class DAWNWALKER_API UQuestNodeSpawnManager : public UQuestNodeSpawnBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UCommunityBaseActivator*> Activators;
    
    UQuestNodeSpawnManager();

};

