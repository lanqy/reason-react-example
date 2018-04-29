open Utils;

let component = ReasonReact.statelessComponent("App");

let make = (~name, _children) => {
  ...component,
  render: _self =>
    <div>
    <img src=requireAssetURI("src/logo.png") />
      <h1>
        {str("Hello " ++ name)}
      </h1>
      <p>{str({j|你好，中国|j})}</p>
    <Counter />
    </div>
};