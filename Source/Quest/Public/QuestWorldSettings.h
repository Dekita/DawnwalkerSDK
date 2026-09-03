#pragma once
#include "CoreMinimal.h"
#include "GameFramework/WorldSettings.h"
#include "Templates/SubclassOf.h"
#include "QuestWorldSettings.generated.h"

class UQuestSketch;

UCLASS(Blueprintable)
class QUEST_API AQuestWorldSettings : public AWorldSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UQuestSketch> Quest;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAllowRunningQuestSketchOverride;
    
    AQuestWorldSettings(const FObjectInitializer& ObjectInitializer);

};

