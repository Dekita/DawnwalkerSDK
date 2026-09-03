#pragma once
#include "CoreMinimal.h"
#include "DogwoodDialogueDesc.generated.h"

class UCinematicDialogue;

USTRUCT(BlueprintType)
struct DAWNWALKER_API FDogwoodDialogueDesc {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UCinematicDialogue> Dialogue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TOptional<FName> InputName;
    
    FDogwoodDialogueDesc();
};

