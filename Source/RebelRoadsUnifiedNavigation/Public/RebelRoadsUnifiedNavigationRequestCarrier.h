#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "RebelRoadsUnifiedNavigationRequestProviderInterface.h"
#include "RebelRoadsUnifiedNavigationRequestCarrier.generated.h"

UCLASS(Blueprintable)
class REBELROADSUNIFIEDNAVIGATION_API URebelRoadsUnifiedNavigationRequestCarrier : public UObject, public IRebelRoadsUnifiedNavigationRequestProviderInterface {
    GENERATED_BODY()
public:
    URebelRoadsUnifiedNavigationRequestCarrier();


    // Fix for true pure virtual functions not being implemented
};

