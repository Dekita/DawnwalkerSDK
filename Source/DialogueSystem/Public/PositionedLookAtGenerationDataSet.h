#pragma once
#include "CoreMinimal.h"
#include "PositionedLookAtGenerationData.h"
#include "PositionedLookAtGenerationDataSet.generated.h"

USTRUCT(BlueprintType)
struct DIALOGUESYSTEM_API FPositionedLookAtGenerationDataSet {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPositionedLookAtGenerationData> Sections;
    
    FPositionedLookAtGenerationDataSet();
};

