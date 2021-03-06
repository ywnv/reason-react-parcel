[@react.component]
let make = (~href: Router.t,~className="",~style=?,~children) =>{

    let handleClick = (href,e) =>{
        ReactEvent.Mouse.preventDefault(e);
        ReasonReactRouter.push(href->Router.unwrap);
    };

    <a 
        href={href->Router.unwrap} 
        className=className
        ?style
        onClick={e => handleClick(href,e)}
    >
        children
    </a>;
};