#pragma once
#include "CoreMinimal.h"
#include "SpecialDialogueChoice.h"
#include "ReadSpecialChoice.generated.h"

class UReadableDataAsset;

UCLASS(Blueprintable)
class DOGWOODDIALOGUE_API UReadSpecialChoice : public USpecialDialogueChoice {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UReadableDataAsset> Readable;
    
    UReadSpecialChoice();

};

