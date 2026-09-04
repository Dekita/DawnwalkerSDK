#pragma once
#include "CoreMinimal.h"
#include "MappinConfigState.generated.h"

class UPaperSprite;

USTRUCT(BlueprintType)
struct FMappinConfigState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPaperSprite* Icon;
    
    DOGWOODMAP_API FMappinConfigState();
};

