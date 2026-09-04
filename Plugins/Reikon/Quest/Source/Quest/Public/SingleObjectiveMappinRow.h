#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SingleObjectiveMappinRow.generated.h"

class UQuest;

USTRUCT(BlueprintType)
struct QUEST_API FSingleObjectiveMappinRow {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UQuest* Quest;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText ObjectiveText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGuid ObjectiveGuid;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText MappinText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGuid MappinGuid;
    
    FSingleObjectiveMappinRow();
};

