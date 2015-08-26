/*

Copyright (c) Christian Kaegi, August 2015, www.kaegi.net/turtlebitesim

*/

package controller.startup;
import view.component.EnterInstruction;
import view.mediator.EnterInstructionMediator;
import view.component.Display;
import view.mediator.DisplayMediator;
import view.mediator.InstructionDisplayMediator;
import view.component.InstructionDisplay;
import view.component.Overlay;
import view.mediator.OverlayMediator;
import view.mediator.OutputMediator;
import view.component.Output;
import view.mediator.HighlightMediator;
import view.component.Highlight;
import view.mediator.HotspotMediator;
import view.component.Hotspot;
import view.component.lines.Clock;
import view.mediator.lines.ClockMediator;
import view.component.lines.Ram;
import view.mediator.lines.RamMediator;
import view.component.lines.Programcounter;
import view.mediator.lines.ProgramcounterMediator;
import view.component.lines.Register;
import view.mediator.lines.RegisterMediator;
import view.component.lines.Multiplexer;
import view.mediator.lines.MultiplexerMediator;
import view.mediator.lines.AluMediator;
import view.component.lines.Alu;
import view.component.lines.Accumulator;
import view.mediator.lines.AccumulatorMediator;
import view.mediator.lines.DecoderMediator;
import view.component.lines.Decoder;
import view.mediator.WelcomeMediator;
import view.mediator.lines.EnablerMediator;
import view.component.lines.Enabler;
import view.component.lines.Comparator;
import view.mediator.lines.ComparatorMediator;
import view.component.lines.Gates;
import view.component.Welcome;
import view.mediator.lines.GatesMediator;
import view.mediator.MainMenuMediator;
import view.component.MainMenu;
import view.component.lines.MainBus;
import view.mediator.lines.MainBusMediator;
import view.component.TopLayer;
import view.mediator.TopLayerMediator;
import view.component.lines.BottomLayer;
import view.mediator.lines.BottomLayerMediator;
import AppMediator;
import org.puremvc.haxe.multicore.patterns.command.SimpleCommand;
import org.puremvc.haxe.multicore.interfaces.INotification;

class PrepareViewCommand extends SimpleCommand {
    public function new() {
        super();
    }

    override function execute(note:INotification):Void {
        if (note.getName() == AppConstants.PREPARE_VIEW) {
            var app = cast(note.getBody(), App);
            facade.registerMediator(new AppMediator(app));
            facade.registerMediator(new BottomLayerMediator(new BottomLayer()));
            facade.registerMediator(new MainBusMediator(new MainBus()));
            facade.registerMediator(new ComparatorMediator(new Comparator()));
            facade.registerMediator(new GatesMediator(new Gates()));
            facade.registerMediator(new AccumulatorMediator(new Accumulator()));
            facade.registerMediator(new AluMediator(new Alu()));
            facade.registerMediator(new EnablerMediator(new Enabler()));
            facade.registerMediator(new DecoderMediator(new Decoder()));
            facade.registerMediator(new RegisterMediator(new Register()));
            facade.registerMediator(new MultiplexerMediator(new Multiplexer()));
            facade.registerMediator(new ProgramcounterMediator(new Programcounter()));
            facade.registerMediator(new RamMediator(new Ram()));
//facade.registerMediator(new KeyboardMediator(new Keyboard()));
            facade.registerMediator(new ClockMediator(new Clock()));
            facade.registerMediator(new TopLayerMediator(new TopLayer()));
            facade.registerMediator(new DisplayMediator(new Display()));
            facade.registerMediator(new OutputMediator(new Output()));
            facade.registerMediator(new HighlightMediator(new Highlight()));
            facade.registerMediator(new MainMenuMediator(new MainMenu()));
            facade.registerMediator(new InstructionDisplayMediator(new InstructionDisplay()));
            facade.registerMediator(new OverlayMediator(new Overlay()));
            facade.registerMediator(new HotspotMediator(new Hotspot()));
            facade.registerMediator(new WelcomeMediator(new Welcome()));
            sendNotification(AppConstants.STARTUP_COMPLETE);
        }
    }
}
