#pragma once
#include "CoreMinimal.h"
#include "Components/NamedSlotInterface.h"
#include "Components/ScrollBox.h"
#include "DWCommonScrollBox.generated.h"

class UWidget;

UCLASS(Blueprintable)
class DOGWOODUI_API UDWCommonScrollBox : public UScrollBox, public INamedSlotInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAutoRegisterAsScrollRecipient;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidget* ThumbContent;
    
public:
    UDWCommonScrollBox();

    UFUNCTION(BlueprintCallable)
    void EnableGamepadScroll();
    
    UFUNCTION(BlueprintCallable)
    void DisableGamepadScroll();
    

    // Fix for true pure virtual functions not being implemented
    virtual void GetSlotNames(TArray<FName>& SlotNames) const override {}
    virtual UWidget* GetContentForSlot(FName SlotName) const override { return nullptr; }
    virtual void SetContentForSlot(FName SlotName, UWidget* Content) override {}
};

