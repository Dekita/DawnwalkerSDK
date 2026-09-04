#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Engine/DataTable.h"
#include "QuestStartMappinCacheRow.generated.h"

USTRUCT(BlueprintType)
struct FQuestStartMappinCacheRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGuid QuestGuid;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector MappinLocation;
    
    DOGWOODMAP_API FQuestStartMappinCacheRow();
};

