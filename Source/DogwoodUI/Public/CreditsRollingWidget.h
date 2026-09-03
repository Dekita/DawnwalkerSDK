#pragma once
#include "CoreMinimal.h"
#include "CommonUserWidget.h"
#include "CreditsRollingWidget.generated.h"

class UCommonListView;
class UCreditsEntryUIObject;

UCLASS(Blueprintable, EditInlineNew)
class DOGWOODUI_API UCreditsRollingWidget : public UCommonUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonListView* RollingListView;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UCreditsEntryUIObject*> EntryObjectList;
    
public:
    UCreditsRollingWidget();

};

