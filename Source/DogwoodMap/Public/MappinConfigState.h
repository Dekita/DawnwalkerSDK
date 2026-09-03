#pragma once
#include "CoreMinimal.h"
#include "MappinConfigState.generated.h"

class UPaperSprite;

USTRUCT(BlueprintType)
struct DOGWOODMAP_API FMappinConfigState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPaperSprite* Icon;
    
    FMappinConfigState();
};

