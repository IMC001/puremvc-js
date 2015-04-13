	
 	/* implementation end */
 	 
 	// export the actors
 	scope.View = View;
 	scope.Model = Model;
 	scope.Controller = Controller;
 	scope.SimpleCommand = SimpleCommand;
 	scope.MacroCommand = MacroCommand;
 	scope.Facade = Facade;
 	scope.Mediator = Mediator;
 	scope.Observer = Observer;
 	scope.Notification = Notification;
 	scope.Notifier = Notifier;
 	scope.Proxy = Proxy;
 	scope.define = define;
 	scope.declare = declare;
 	
})(
    typeof module === 'object' && typeof module.exports === 'object' ? exports : 
    this.puremvc || (this.puremvc = {})
);
