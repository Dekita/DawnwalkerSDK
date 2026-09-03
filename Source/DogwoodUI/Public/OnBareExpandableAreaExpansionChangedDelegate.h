#pragma once
#include "CoreMinimal.h"
#include "OnBareExpandableAreaExpansionChangedDelegate.generated.h"

class UBareExpandableArea;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnBareExpandableAreaExpansionChanged, UBareExpandableArea*, Area, bool, bIsExpanded);

