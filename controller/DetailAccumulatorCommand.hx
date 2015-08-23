package controller;
import model.proxy.AppProxy;
import model.proxy.ClockProxy;
import view.component.DetailAccumulator;
import view.mediator.DetailAccumulatorMediator;
import org.puremvc.haxe.multicore.patterns.command.SimpleCommand;
import org.puremvc.haxe.multicore.interfaces.INotification;
class DetailAccumulatorCommand extends SimpleCommand {


    public function new() {
        super();
    }

    override function execute(note:INotification):Void {

        if (!facade.hasMediator(DetailAccumulatorMediator.NAME)) {
            var appProxy:AppProxy = cast(facade.retrieveProxy(AppProxy.NAME), AppProxy);
            var clockProxy:ClockProxy = cast(facade.retrieveProxy(ClockProxy.NAME), ClockProxy);

            appProxy.setDetailPopupActive(true);
            facade.registerMediator(new DetailAccumulatorMediator(new DetailAccumulator()));
            sendNotification(AppConstants.DETAIL_POPUP_ACTIVE);
        }
    }
}
