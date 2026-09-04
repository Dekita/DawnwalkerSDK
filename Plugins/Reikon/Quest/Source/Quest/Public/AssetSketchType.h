#pragma once
#include "CoreMinimal.h"
#include "QuestSketchType.h"
#include "AssetSketchType.generated.h"

class UQuestSketch;

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class QUEST_API UAssetSketchType : public UQuestSketchType {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UQuestSketch> SketchClass;
    
    UAssetSketchType();

};

