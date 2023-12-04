document.getElementById("showSolution").addEventListener(
    "click",
    () => {
      document.getElementById("solution").insertAdjacentHTML(
        "beforeEnd",
        `<ul>
        <li><strong>The <code>&lt;mi&gt;</code> elements containing the "A" and "n" variables are rendered in italic</strong>. However, the <code>&lt;mi&gt;</code> elements with multiple characters "𝔰𝔩" or whose character is "𝔽" are still rendered upright.</li>
        <li><strong>Spacing is automatically added around the <code>&lt;mo&gt;</code> elements whose text is "∀", "∊", "=" or a comma</strong>. However, some of them have no spacing added before while the parentheses still have no spacing around them.</li>
      </ul>`,
      );
    },
    { once: true },
  );
  