#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "DashboardTabInfo.generated.h"

USTRUCT(BlueprintType)
struct FDashboardTabInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag TabTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText TabTitle;
    
    DOGWOODUI_API FDashboardTabInfo();
};

