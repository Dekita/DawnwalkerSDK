#pragma once
#include "CoreMinimal.h"
#include "UserPackageRules.generated.h"

class UHoudiniToolsPackageAsset;

USTRUCT(BlueprintType)
struct HOUDINIENGINERUNTIME_API FUserPackageRules {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UHoudiniToolsPackageAsset* ToolsPackageAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> Include;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> Exclude;
    
    FUserPackageRules();
};

