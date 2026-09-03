#pragma once
#include "CoreMinimal.h"
#include "InteriorVolumeData.h"
#include "InteriorChangedSignatureDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FInteriorChangedSignature, const FInteriorVolumeData&, CurrentInteriorData);

