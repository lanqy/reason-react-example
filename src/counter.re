open Utils;

type state = {
  count: int
};

type action =
  | Increase
  | Decrease;

let component = ReasonReact.reducerComponent("Counter");

let make = (_children) => {
  ...component,
  initialState: () => { count: 0 },
  reducer: (action, state) => {
    switch (action) {
      | Increase => ReasonReact.Update({count: state.count + 1})
      | Decrease => ReasonReact.Update({count: state.count - 1})
    }
  },
  render: ({state, send}) =>
    <div>
      <h1>{str(string_of_int(state.count))}</h1>
      <button onClick=((_) => send(Increase))>
        {str("+")} 
      </button>
      <button onClick=((_) => send(Decrease))>
        {str("-")} 
      </button>
    </div>
};