#pragma once
#include "CoreMinimal.h"
#include "WwisePackagedFile.h"
#include "WwiseMediaCookedData.generated.h"

class UObject;

USTRUCT(BlueprintType)
struct WWISEFILEHANDLER_API FWwiseMediaCookedData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MediaId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName DebugName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWwisePackagedFile PackagedFile;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UObject*> AdditionalPackagedFiles;
    
    FWwiseMediaCookedData();
};

