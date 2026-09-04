#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "QuestSketchType.h"
#include "EmbeddedSketchType.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class QUEST_API UEmbeddedSketchType : public UQuestSketchType {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGuid GraphGuid;
    
    UEmbeddedSketchType();

};

