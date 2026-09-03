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

protected:
    // INamedSlotInterface: real implementation unknown, but this class's own named slot is known from its members.
    virtual void GetSlotNames(TArray<FName>& SlotNames) const override { SlotNames.Add(TEXT("ThumbContent")); }
    virtual UWidget* GetContentForSlot(FName SlotName) const override { return SlotName == TEXT("ThumbContent") ? ThumbContent : nullptr; }
    virtual void SetContentForSlot(FName SlotName, UWidget* Content) override { if (SlotName == TEXT("ThumbContent")) { ThumbContent = Content; } }
};

