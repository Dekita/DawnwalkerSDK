#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SingleObjectiveRow.generated.h"

class UQuest;

USTRUCT(BlueprintType)
struct QUEST_API FSingleObjectiveRow {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UQuest* Quest;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Text;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGuid Guid;
    
    FSingleObjectiveRow();
};

