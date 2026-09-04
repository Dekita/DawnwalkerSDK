#pragma once
#include "CoreMinimal.h"
#include "Engine/DeveloperSettings.h"
#include "QuestEditorUserSettings.generated.h"

class UQuestSketch;

UCLASS(Blueprintable, Config=EditorPerProjectUserSettings)
class QUEST_API UQuestEditorUserSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UQuestSketch> EditorQuestSketchOverride;
    
public:
    UQuestEditorUserSettings();

};

