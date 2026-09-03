#pragma once
#include "CoreMinimal.h"
#include "CommonActivatableWidget.h"
#include "DWMultiChoiceDialogBase.generated.h"

class UCommonRichTextBlock;
class UDWButtonBase;
class UDynamicEntryBox;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class DOGWOODUI_API UDWMultiChoiceDialogBase : public UCommonActivatableWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonRichTextBlock* RichText_Description;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UDynamicEntryBox* EntryBox_ButtonBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UDWButtonBase*> ButtonEntries;
    
public:
    UDWMultiChoiceDialogBase();

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PostProcessCreatedEntry(UDWButtonBase* Button);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnDialogSetup();
    
};

