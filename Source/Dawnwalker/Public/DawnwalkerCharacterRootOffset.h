#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "DawnwalkerCharacterSocket.h"
#include "DawnwalkerCharacterRootOffset.generated.h"

USTRUCT(BlueprintType)
struct DAWNWALKER_API FDawnwalkerCharacterRootOffset : public FDawnwalkerCharacterSocket {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector Offset;
    
    FDawnwalkerCharacterRootOffset();
};

