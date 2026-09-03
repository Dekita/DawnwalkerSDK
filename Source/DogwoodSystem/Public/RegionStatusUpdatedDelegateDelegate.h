#pragma once
#include "CoreMinimal.h"
#include "RegionData.h"
#include "RegionStatusUpdatedDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FRegionStatusUpdatedDelegate, const FRegionData&, RegionData, bool, IsNewlyDiscovered, bool, EnteredRegion);

