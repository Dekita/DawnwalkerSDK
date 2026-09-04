#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "UISaveInfo.h"
#include "SaveButtonInterface.generated.h"

class UWidget;

UINTERFACE(Blueprintable)
class USaveButtonInterface : public UInterface {
    GENERATED_BODY()
};

class ISaveButtonInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetSave(const FUISaveInfo& SaveInfo);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Initialize();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    UWidget* GetUWidget();
    
};

