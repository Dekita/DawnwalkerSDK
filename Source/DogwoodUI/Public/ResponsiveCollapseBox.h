#pragma once
#include "CoreMinimal.h"
#include "Components/ContentWidget.h"
#include "ResponsiveCollapseBox.generated.h"

UCLASS(Blueprintable)
class DOGWOODUI_API UResponsiveCollapseBox : public UContentWidget {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnChildFitChanged, bool, bFits);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnChildFitChanged OnChildFitChanged;
    
    UResponsiveCollapseBox();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool DoesChildFit() const;
    
};

