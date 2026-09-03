#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "CinematicChoiceLine.h"
#include "Blueprint/UserWidget.h"
#include "Templates/SubclassOf.h"
#include "CinematicDialogueChoiceWidget.generated.h"

class UCinematicDialogueChoiceLineWidget;
class UCinematicNode_Choice;
class UCommonButtonBase;
class UCommonButtonGroupBase;
class UInputAction;
class UVerticalBox;
class UWidget;

UCLASS(Blueprintable, EditInlineNew)
class DOGWOODUI_API UCinematicDialogueChoiceWidget : public UUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVerticalBox* ChoiceContainer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCommonButtonGroupBase* ButtonGroup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCinematicNode_Choice* DisplayedChoice;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidget* FirstUnlockedChoiceWidget;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UCinematicDialogueChoiceLineWidget> ChoiceButtonWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UInputAction*> ChoiceInputActions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UCinematicDialogueChoiceLineWidget*> DisplayedChoiceWidgets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UCinematicDialogueChoiceLineWidget*> ChoiceWidgetPool;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TMap<FGuid, UCinematicDialogueChoiceLineWidget*> ChoiceWidgetMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UCinematicDialogueChoiceLineWidget*> RegularChoiceWidgets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGuid, FCinematicChoiceLine> ChoiceLines;
    
public:
    UCinematicDialogueChoiceWidget();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ShowChoices(UCinematicNode_Choice* InChoiceNode);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnChoiceSelected();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnChoiceGroupSelectionChanged(UCommonButtonBase* AssociatedButton, int32 ButtonIndex);
    
    UFUNCTION(BlueprintCallable)
    void OnChoiceButtonClicked(UCommonButtonBase* AssociatedButton, int32 ButtonIndex);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TMap<FGuid, FCinematicChoiceLine> GetChoiceLines();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CleanupOnDialogueEnd();
    
};

