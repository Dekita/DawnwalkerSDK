#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "MovieSubtitleWidget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class DOGWOODUI_API UMovieSubtitleWidget : public UUserWidget {
    GENERATED_BODY()
public:
    UMovieSubtitleWidget();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void UpdateSubtitle(const FText& InText);
    
};

