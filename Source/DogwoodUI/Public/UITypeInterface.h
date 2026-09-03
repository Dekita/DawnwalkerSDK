#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "EUIAudioCategory.h"
#include "UITypeInterface.generated.h"

UINTERFACE(Blueprintable)
class DOGWOODUI_API UUITypeInterface : public UInterface {
    GENERATED_BODY()
};

class DOGWOODUI_API IUITypeInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    EUIAudioCategory GetPageType();
    
};

