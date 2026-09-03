#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "HubMessage.generated.h"

UCLASS(Abstract, Blueprintable)
class DOGWOODUI_API UHubMessage : public UObject {
    GENERATED_BODY()
public:
    UHubMessage();

};

