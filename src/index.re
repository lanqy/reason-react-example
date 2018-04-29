open Utils;

requireCSS("src/style.css");

registerServiceWorker();

ReactDOMRe.renderToElementWithId(<App name="ReasonML" />, "root");

