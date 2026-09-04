#pragma once
#include "CoreMinimal.h"
#include "ECutRepetitionMode.h"
#include "ResponseCameraCutDefinition.h"
#include "ResponseCameraCutsDefinitionSet.generated.h"

USTRUCT(BlueprintType)
struct FResponseCameraCutsDefinitionSet {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FResponseCameraCutDefinition> CutDefinitions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECutRepetitionMode RepetitionMode;
    
    DIALOGUESYSTEM_API FResponseCameraCutsDefinitionSet();
};

