#pragma once
#include "CoreMinimal.h"
#include "RestrictedFNamePicker.generated.h"

USTRUCT(BlueprintType)
struct DIALOGUESYSTEM_API FRestrictedFNamePicker {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Name;
    
public:
    FRestrictedFNamePicker();
};

