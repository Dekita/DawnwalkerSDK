#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "RebelRoadsNavVolumeData.generated.h"

USTRUCT(BlueprintType)
struct FRebelRoadsNavVolumeData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVector> Vertices;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsCrossing;
    
    REBELROADS_API FRebelRoadsNavVolumeData();
};

