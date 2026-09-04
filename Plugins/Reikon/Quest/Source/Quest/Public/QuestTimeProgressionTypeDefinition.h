#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "EQuestTimeProgressionType.h"
#include "QuestTimeProgressionTypeDefinition.generated.h"

USTRUCT(BlueprintType)
struct FQuestTimeProgressionTypeDefinition : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 TimeSegments;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EQuestTimeProgressionType TimeProgressionType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 Hours;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 Minutes;
    
    QUEST_API FQuestTimeProgressionTypeDefinition();
};

