#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "DashboardTabInterface.generated.h"

UINTERFACE(Blueprintable)
class DOGWOODUI_API UDashboardTabInterface : public UInterface {
    GENERATED_BODY()
};

class IDashboardTabInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool CanExitTab() const;
    
};

