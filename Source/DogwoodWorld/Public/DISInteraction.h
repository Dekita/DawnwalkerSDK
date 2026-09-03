#pragma once
#include "CoreMinimal.h"
#include "EDISInteractionType.h"
#include "DISInteraction.generated.h"

class UInputAction;

USTRUCT(BlueprintType)
struct DOGWOODWORLD_API FDISInteraction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UInputAction* InteractionInput;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EDISInteractionType InteractionType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InteractionTime;
    
    FDISInteraction();
};

